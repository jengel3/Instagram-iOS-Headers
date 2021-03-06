
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTLayer, CPTAnnotationHostLayer;

@interface CPTAnnotation : NSObject <NSCoding> {

	CPTLayer* contentLayer;
	CPTAnnotationHostLayer* annotationHostLayer;
	float rotation;
	CGPoint displacement;
	CGPoint contentAnchorPoint;

}

@property (nonatomic,retain) CPTLayer * contentLayer; 
@property (assign,nonatomic,__weak) CPTAnnotationHostLayer * annotationHostLayer; 
@property (assign,nonatomic) CGPoint contentAnchorPoint; 
@property (assign,nonatomic) CGPoint displacement; 
@property (assign,nonatomic) float rotation; 
-(CPTAnnotationHostLayer *)annotationHostLayer;
-(CGPoint)contentAnchorPoint;
-(CGPoint)displacement;
-(void)setContentLayer:(CPTLayer *)arg1 ;
-(void)setAnnotationHostLayer:(CPTAnnotationHostLayer *)arg1 ;
-(void)setDisplacement:(CGPoint)arg1 ;
-(void)setContentAnchorPoint:(CGPoint)arg1 ;
-(void)positionContentLayer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(CPTLayer *)contentLayer;
@end

