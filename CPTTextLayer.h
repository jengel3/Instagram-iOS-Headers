
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTBorderedLayer.h>

@class NSString, CPTTextStyle, NSAttributedString;

@interface CPTTextLayer : CPTBorderedLayer {

	char inTextUpdate;
	NSString* text;
	CPTTextStyle* textStyle;
	NSAttributedString* attributedText;
	CGSize maximumSize;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) CPTTextStyle * textStyle; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) char inTextUpdate; 
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(char)inTextUpdate;
-(void)setInTextUpdate:(char)arg1 ;
-(CGSize)sizeThatFits;
-(void)setMaximumSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(NSAttributedString *)attributedText;
-(void)setPaddingTop:(float)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setPaddingBottom:(float)arg1 ;
-(CPTTextStyle *)textStyle;
-(id)initWithText:(id)arg1 ;
-(id)initWithAttributedText:(id)arg1 ;
-(void)setShadow:(id)arg1 ;
-(void)setTextStyle:(CPTTextStyle *)arg1 ;
-(CGSize)maximumSize;
@end

