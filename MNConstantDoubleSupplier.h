
#import <Instagram/MNDoubleSupplier.h>

@class NSString;

@interface MNConstantDoubleSupplier : NSObject <MNDoubleSupplier> {

	double _value;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zero;
+(id)one;
-(double)value;
-(id)initWithValue:(double)arg1 ;
@end

