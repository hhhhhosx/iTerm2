//
//  iTermSwipeHandler.h
//  iTerm2
//
//  Created by George Nachman on 4/4/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol iTermSwipeHandler<NSObject>
- (nullable id)didBeginSwipeWithAmount:(CGFloat)amount;
- (BOOL)canSwipeBack;
- (BOOL)canSwipeForward;
- (void)didEndSwipe:(id)context amount:(CGFloat)amount;
- (void)didCancelSwipe:(id)context;

// Called when momentum stage begun
- (void)didCompleteSwipe:(id)context direction:(int)direction;

// Called when momentum stage ends.
- (void)didCompleteAnimation:(id)context;

// Update animation location
- (void)didUpdateSwipe:(id)context amount:(CGFloat)amount;
- (CGFloat)swipeWidth;
@end

NS_ASSUME_NONNULL_END
