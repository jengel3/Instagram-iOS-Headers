/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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

