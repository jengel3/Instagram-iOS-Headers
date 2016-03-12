
#import <Instagram/CPTLineStyle.h>

@class NSArray, CPTColor, CPTFill, CPTGradient;

@interface CPTMutableLineStyle : CPTLineStyle

@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) float miterLimit; 
@property (assign,nonatomic) float lineWidth; 
@property (nonatomic,retain) NSArray * dashPattern; 
@property (assign,nonatomic) float patternPhase; 
@property (nonatomic,retain) CPTColor * lineColor; 
@property (nonatomic,retain) CPTFill * lineFill; 
@property (nonatomic,retain) CPTGradient * lineGradient; 
@end

