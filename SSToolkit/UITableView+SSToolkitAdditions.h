//
//  UITableView+SSToolkitAdditions.h
//  SSToolkit
//
//  Created by Suleyman Melikoglu on 2/5/13.
//  Copyright (c) 2013 Sam Soffes. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Provides extensions to `UITableView` for various common tasks.
 */
@interface UITableView (SSToolkitAdditions)

/**
 Shortcut method for scrolling to the given index path
 
 @param IndexPath the NSIndexPath object that holds section and row values
 */
- (void)scrollToIndexPath:(NSIndexPath *)indexPath;

/**
 Shortcut method for scrolling to the top row of a section
 
 @param Section The section index to scroll to
 */
- (void)scrollToTopOfSection:(NSInteger)section;

/**
 Shortcut method for scrolling to the bottom row of given section
 
 @param Section The section index to scroll to
 */
- (void)scrollToBottomOfSection:(NSInteger)section;

@end
