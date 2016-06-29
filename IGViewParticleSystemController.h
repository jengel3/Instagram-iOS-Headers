

@protocol MNDoubleSupplier;
@class MNParticleSystemView, MNSimpleParticleStyle;

@interface IGViewParticleSystemController : NSObject {

	MNParticleSystemView* _particleSystemView;
	id<MNDoubleSupplier> _commonVelocityXSupplier;
	MNSimpleParticleStyle* _heartStyle;

}
-(void)_ensureHeartStyles;
-(id)initWithParticleSystemView:(id)arg1 ;
-(void)floatHearts;
-(void)reset;
@end

