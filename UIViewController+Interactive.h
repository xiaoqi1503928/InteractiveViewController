//
//  UIViewController+Interactive.h
//  woaoo-basketball
//
//  Created by Benson Tommy on 2019/7/4.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Interactive)

- (void)addSlideDownGesture;

// 用这个方法present，否则会有黑屏出现
- (void)presentedToViewController:(UIViewController *)vc animated:(BOOL)animated completion:(void (^)(void))completion;

@end
