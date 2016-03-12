
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTAxis;

@interface CPTGridLines : CPTLayer {

	char major;
	CPTAxis* axis;

}

@property (assign,nonatomic,__weak) CPTAxis * axis; 
@property (assign,nonatomic) char major; 
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAxis:(CPTAxis *)arg1 ;
-(CPTAxis *)axis;
-(id)initWithLayer:(id)arg1 ;
-(void)setMajor:(char)arg1 ;
-(char)major;
@end

