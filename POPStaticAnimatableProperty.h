
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPAnimatableProperty.h>

@interface POPStaticAnimatableProperty : POPAnimatableProperty {

	SCD_Struct_PO96* _state;

}
-(/*^block*/id)readBlock;
-(/*^block*/id)writeBlock;
-(id)name;
-(float)threshold;
@end

