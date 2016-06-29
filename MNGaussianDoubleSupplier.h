
#import <Instagram/MNDoubleSupplier.h>

@class MNGaussian, NSString;

@interface MNGaussianDoubleSupplier : NSObject <MNDoubleSupplier> {

	MNGaussian* _gaussian;
	double _min;
	double _max;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)value;
-(id)initWithMin:(double)arg1 max:(double)arg2 ;
@end

