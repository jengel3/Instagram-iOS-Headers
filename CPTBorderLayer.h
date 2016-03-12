
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTBorderedLayer;

@interface CPTBorderLayer : CPTLayer {

	CPTBorderedLayer* maskedLayer;

}

@property (nonatomic,retain) CPTBorderedLayer * maskedLayer; 
-(id)sublayersExcludedFromAutomaticLayout;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(CPTBorderedLayer *)maskedLayer;
-(void)setMaskedLayer:(CPTBorderedLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
@end

