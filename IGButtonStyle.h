
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGButtonStyleDelegate.h>

@interface IGButtonStyle : NSObject <IGButtonStyleDelegate>
+(CGSize)sizeForButton:(id)arg1 ;
+(void)configureButton:(id)arg1 ;
+(id)backgroundImageForControlState:(unsigned)arg1 ;
+(UIEdgeInsets)titleEdgeInsetsForButton:(id)arg1 ;
+(id)backgroundImageWithColor:(id)arg1 ;
+(id)titleColorForControlState:(unsigned)arg1 ;
+(id)titleShadowColorForControlState:(unsigned)arg1 ;
@end

