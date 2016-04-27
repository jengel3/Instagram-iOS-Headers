

#import <Instagram/Instagram-Structs.h>
@interface IGUFIButtonFactory : NSObject
+(id)moreButtonWithColorType:(int)arg1 ;
+(id)commentButtonWithColorType:(int)arg1 ;
+(id)directButtonWithColorType:(int)arg1 ;
+(id)likeButtonWithColorType:(int)arg1 ;
+(void)setupButtonLayout:(id)arg1 colorType:(int)arg2 ;
+(UIEdgeInsets)buttonContentEdgeInsets;
@end

