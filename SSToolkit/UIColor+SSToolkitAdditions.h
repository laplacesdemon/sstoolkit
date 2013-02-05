//
//  UIColor+SSToolkitAdditions.h
//  SSToolkit
//
//  Created by Sam Soffes on 4/19/10.
//  Copyright 2010-2011 Sam Soffes. All rights reserved.
//

/**
 Provides extensions to `UIColor` for various common tasks.
 */
@interface UIColor (SSToolkitAdditions)

/**
 Creates and returns an UIColor object with fixed RGB values
 
 @param R The value of the red component
 @param G The value of the green component
 @param B The value of the blue component
 
 @return An UIColor object containing a value.
 */
+ (UIColor *)colorWithR:(CGFloat)red G:(CGFloat)green B:(CGFloat)blue A:(CGFloat)alpha;

/**
 Creates and returns an UIColor object containing a given value.
 
 @param hex The value for the new color. The `#` sign is not required.
 
 @return An UIColor object containing a value.
 
 You can specify hex values in the following formats: `rgb`, `rrggbb`, or `rrggbbaa`.
 
 The default alpha value is `1.0`.
 
 */
+ (UIColor *)colorWithHex:(NSString *)hex;

/**
 Returns the receiver's value as a hex string.
 
 @return The receiver's value as a hex string.
 
 The value will be `nil` if the color is in a color space other than Grayscale or RGB. The `#` sign is omitted. Alpha
 will be omitted.
 */
- (NSString *)hexValue;

/**
 Returns the receiver's value as a hex string.
 
 @param includeAlpha `YES` if alpha should be included. `NO` if it should not.
 
 @return The receiver's value as a hex string.
 
 The value will be `nil` if the color is in a color space other than Grayscale or RGB. The `#` sign is omitted. Alpha is
 included if `includeAlpha` is `YES`.
 */
- (NSString *)hexValueWithAlpha:(BOOL)includeAlpha;

/**
 The receiver's red component value. (read-only)
 
 The value of this property is a floating-point number in the range `0.0` to `1.0`. `-1.0` is returned if the color is
 not in the RGB colorspace.
 */
@property (nonatomic, assign, readonly) CGFloat red;

/**
 The receiver's green component value. (read-only)
 
 The value of this property is a floating-point number in the range `0.0` to `1.0`. `-1.0` is returned if the color is
 not in the RGB colorspace.
 */
@property (nonatomic, assign, readonly) CGFloat green;

/**
 The receiver's blue component value. (read-only)
 
 The value of this property is a floating-point number in the range `0.0` to `1.0`. `-1.0` is returned if the color is
 not in the RGB colorspace.
 */
@property (nonatomic, assign, readonly) CGFloat blue;

/**
 The receiver's alpha value. (read-only)
 
 The value of this property is a floating-point number in the range `0.0` to `1.0`, where `0.0` represents totally
 transparent and `1.0` represents totally opaque.
 */
@property (nonatomic, assign, readonly) CGFloat alpha;

@end
