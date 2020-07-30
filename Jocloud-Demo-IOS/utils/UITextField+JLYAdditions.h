//
//  UITextField+JLYAdditions.h
//  SCClassRoom
//
//  Created by GasparChu on 2020/3/10.
//  Copyright © 2020 SY. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (JLYAdditions)

@property (nonatomic, assign) NSUInteger jly_maxLength; // 输入最大长度

/// 是否输入的是数字字符
/// Is input number
- (BOOL)jly_isInputNum:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
