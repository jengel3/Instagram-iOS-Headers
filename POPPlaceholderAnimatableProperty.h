
#import <Instagram/POPAnimatableProperty.h>

@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	float threshold;

}
-(/*^block*/id)readBlock;
-(/*^block*/id)writeBlock;
-(id)name;
-(float)threshold;
@end

