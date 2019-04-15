//
//  IDMUtils.h
//  PhotoBrowserDemo
//
//  Created by Ferrick Chan on 15/04/2019.
//

#import <Foundation/Foundation.h>

@interface IDMUtils : NSObject
+(CGRect) adjustRect:(CGRect)rect forSafeAreaInsets:(UIEdgeInsets)insets forBounds:(CGRect)bounds adjustForStatusBar:(BOOL)adjust statusBarHeight:(int)statusBarHeight;
@end
