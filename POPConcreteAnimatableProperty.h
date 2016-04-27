
#import <Instagram/POPAnimatableProperty.h>

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	float threshold;

}
-(/*^block*/id)readBlock;
-(/*^block*/id)writeBlock;
-(id)initWithName:(id)arg1 readBlock:(/*^block*/id)arg2 writeBlock:(/*^block*/id)arg3 threshold:(float)arg4 ;
-(id)name;
-(float)threshold;
@end

