//
//  EMConversation+EaseUI.h
//  EaseIMKit
//
//  Created by 杜洁鹏 on 2020/11/14.
//

#import <Hyphenate/Hyphenate.h>

NS_ASSUME_NONNULL_BEGIN

@interface EMConversation (EaseUI)

- (void)setTop:(BOOL)isTop;
- (BOOL)isTop;

- (void)setShowName:(NSString *)aShowName;
- (NSString *)showName;

- (void)setDraft:(NSString *)aDraft;
- (NSString *)draft;

- (BOOL)remindMe;

@end

NS_ASSUME_NONNULL_END