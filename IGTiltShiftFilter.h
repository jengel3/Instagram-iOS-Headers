
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@interface IGTiltShiftFilter : IGImageFilter {

	unsigned _mode;
	float _radius;
	float _angle;
	CGPoint _center;

}

@property (assign,nonatomic) unsigned mode;               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float angle;                 //@synthesize angle=_angle - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(id)fragmentShader;
-(id)init;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

