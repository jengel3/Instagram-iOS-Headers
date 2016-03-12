
#import <Instagram/CPTTextStyle.h>

@class NSString, CPTColor;

@interface CPTMutableTextStyle : CPTTextStyle

@property (nonatomic,copy) NSString * fontName; 
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,copy) CPTColor * color; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) int lineBreakMode; 
+(id)textStyleWithAttributes:(id)arg1 ;
@end

