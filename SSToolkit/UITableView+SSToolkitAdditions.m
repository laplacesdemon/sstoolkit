//
//  UITableView+SSToolkitAdditions.m
//  SSToolkit
//
//  Created by Suleyman Melikoglu on 2/5/13.
//  Copyright (c) 2013 Sam Soffes. All rights reserved.
//

#import "UITableView+SSToolkitAdditions.h"

@implementation UITableView (SSToolkitAdditions)

- (void)scrollToIndexPath:(NSIndexPath *)indexPath
{
    [self scrollToRowAtIndexPath:indexPath atScrollPosition:UITableViewScrollPositionTop animated:YES];
}

- (void)scrollToBottomOfSection:(NSInteger)section
{
    NSInteger rowCount = [self.dataSource tableView:self numberOfRowsInSection:section];
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:rowCount - 1 inSection:section];
    [self scrollToIndexPath:indexPath];
}

- (void)scrollToTopOfSection:(NSInteger)section
{
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:0 inSection:section];
    [self scrollToIndexPath:indexPath];
}

@end
