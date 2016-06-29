
#import <Instagram/MNDoubleSupplier.h>

@class NSString;

@interface MNRandomDoubleSupplier : NSObject <MNDoubleSupplier> {

	double _min;
	double _max;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)angle;
+(id)normal;
-(double)value;
-(id)initWithMin:(double)arg1 max:(double)arg2 ;
@end

