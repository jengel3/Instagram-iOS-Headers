

#import <Instagram/Instagram-Structs.h>
@interface IGUFIButtonFactory : NSObject
+(id)moreButtonWithColorType:(int)arg1 ;
+(id)iconButtonWithImageName:(id)arg1 ufiButtonStyleType:(int)arg2 colorType:(int)arg3 accessibilityLabel:(id)arg4 accessibilityHint:(id)arg5 accessibilityIdentifier:(id)arg6 ;
+(UIEdgeInsets)textButtonContentEdgeInsets;
+(void)animateHeartLikeButton:(id)arg1 withHasLiked:(char)arg2 ;
+(id)likeButtonWithColorType:(int)arg1 ufiButtonStyleType:(int)arg2 ;
+(id)commentButtonWithColorType:(int)arg1 ufiButtonStyleType:(int)arg2 ;
+(id)directButtonWithColorType:(int)arg1 ufiButtonStyleType:(int)arg2 ;
+(id)viewButtonWithColorType:(int)arg1 ufiButtonStyleType:(int)arg2 ;
+(id)textButtonWithColorType:(int)arg1 selectedColor:(id)arg2 ;
+(id)countTextButtonWithColorType:(int)arg1 ;
+(UIEdgeInsets)emptyTextButtonContentEdgeInsets;
+(id)likeColorForTextButtonForUFIButtonStyleType:(int)arg1 ;
+(void)updateLikeIconButton:(id)arg1 hasLiked:(char)arg2 animated:(char)arg3 ;
@end

