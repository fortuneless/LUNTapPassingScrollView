//
//  UIView+Addition.h
//
//  Created by Vladimir Sharavara on 3/11/16.
//  Copyright © 2016 LunApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (EnumerationForTest)

- (void)add_enumerateSubviewsPassingTest:(BOOL (^_Nonnull)(UIView * _Nonnull view))testBlock
                                 objects:(void (^)(id _Nonnull obj, BOOL * _Nullable stop))block;

@end
