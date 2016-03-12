
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTPlot, CPTTextStyle, NSString, NSAttributedString;

@interface CPTLegendEntry : NSObject <NSCoding> {

	CPTPlot* plot;
	unsigned index;
	unsigned row;
	unsigned column;
	CPTTextStyle* textStyle;

}

@property (assign,nonatomic,__weak) CPTPlot * plot; 
@property (assign,nonatomic) unsigned index; 
@property (nonatomic,retain) CPTTextStyle * textStyle; 
@property (assign,nonatomic) unsigned row; 
@property (assign,nonatomic) unsigned column; 
@property (nonatomic,readonly) CGSize titleSize; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSAttributedString * attributedTitle; 
-(CGSize)titleSize;
-(CPTPlot *)plot;
-(void)drawTitleInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 scale:(float)arg3 ;
-(void)setPlot:(CPTPlot *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)row;
-(NSString *)title;
-(unsigned)index;
-(NSAttributedString *)attributedTitle;
-(CPTTextStyle *)textStyle;
-(void)setIndex:(unsigned)arg1 ;
-(void)setTextStyle:(CPTTextStyle *)arg1 ;
-(unsigned)column;
-(void)setRow:(unsigned)arg1 ;
-(void)setColumn:(unsigned)arg1 ;
@end

