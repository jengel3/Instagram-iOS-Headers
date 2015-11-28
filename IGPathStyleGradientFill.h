
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class NSArray;

@interface IGPathStyleGradientFill : IGPathStyle {

	NSArray* _stops;
	NSArray* _colors;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign,nonatomic) CGPoint startPoint;              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,retain) NSArray * stops;                 //@synthesize stops=_stops - In the implementation block
@property (nonatomic,retain) NSArray * colors;                //@synthesize colors=_colors - In the implementation block
+(CGPoint)startPointForDirection:(int)arg1 ;
+(CGPoint)endPointForDirection:(int)arg1 ;
+(id)gradientWithDirection:(int)arg1 stops:(id)arg2 colors:(id)arg3 ;
+(id)gradientWithLeftColor:(id)arg1 rightColor:(id)arg2 ;
+(id)gradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 stops:(id)arg3 colors:(id)arg4 ;
-(CGPoint)endPoint;
-(void)setColors:(NSArray *)arg1 ;
-(id)init;
-(void)setDirection:(int)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)stops;
-(void)setStops:(NSArray *)arg1 ;
@end

