/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGKVOObserver : NSObject {

	id _object;
	NSString* _keypath;

}

@property (nonatomic,readonly) id object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
-(id)initWithObject:(id)arg1 keypath:(id)arg2 ;
-(id)observe:(/*^block*/id)arg1 ;
-(id)observeOnMain:(/*^block*/id)arg1 ;
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 deliverOn:(id)arg3 ;
-(id)observeOnMainWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)keypath;
-(id)observe:(/*^block*/id)arg1 deliverOn:(id)arg2 ;
-(id)object;
@end

