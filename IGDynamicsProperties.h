
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IGDynamicsProperties : NSObject <NSCopying> {

	float _springStrength;
	float _mass;
	float _damping;

}

@property (assign,nonatomic) float springStrength;              //@synthesize springStrength=_springStrength - In the implementation block
@property (assign,nonatomic) float mass;                        //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float damping;                     //@synthesize damping=_damping - In the implementation block
+(id)fullyDampedProperties;
+(id)bouncy1DProperties;
+(id)bouncy2DProperties;
-(void)setSpringStrength:(float)arg1 ;
-(float)springStrength;
-(id)description;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)damping;
-(float)mass;
@end

