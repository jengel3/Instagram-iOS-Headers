
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTLayer, NSNumber;

@interface CPTAxisLabel : NSObject <NSCoding> {

	CPTLayer* contentLayer;
	float offset;
	float rotation;
	int alignment;
	NSNumber* tickLocation;

}

@property (nonatomic,retain) CPTLayer * contentLayer; 
@property (assign,nonatomic) float offset; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic) int alignment; 
@property (nonatomic,retain) NSNumber * tickLocation; 
-(void)setContentLayer:(CPTLayer *)arg1 ;
-(id)initWithText:(id)arg1 textStyle:(id)arg2 ;
-(void)setTickLocation:(NSNumber *)arg1 ;
-(NSNumber *)tickLocation;
-(void)positionRelativeToViewPoint:(CGPoint)arg1 forCoordinate:(int)arg2 inDirection:(int)arg3 ;
-(id)initWithContentLayer:(id)arg1 ;
-(void)positionBetweenViewPoint:(CGPoint)arg1 andViewPoint:(CGPoint)arg2 forCoordinate:(int)arg3 inDirection:(int)arg4 ;
-(void)setAlignment:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)alignment;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(CPTLayer *)contentLayer;
@end

