/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGKVOHandle : NSObject {

	char _stoppedObserving;
	/*^block*/id _block;
	id _object;
	NSString* _keyPath;

}

@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 object:(id)arg2 keyPath:(id)arg3 ;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)stopObserving;
@end

