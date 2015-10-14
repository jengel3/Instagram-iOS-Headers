/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SRIOConsumer : NSObject {

	/*^block*/id _scanner;
	/*^block*/id _handler;
	unsigned long _bytesNeeded;
	char _readToCurrentFrame;
	char _unmaskBytes;

}

@property (nonatomic,copy,readonly) id consumer;                     //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,copy,readonly) id handler;                      //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) char readToCurrentFrame;              //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) char unmaskBytes;                     //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long)bytesNeeded;
-(char)readToCurrentFrame;
-(char)unmaskBytes;
-(void)setBytesNeeded:(unsigned long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(char)arg4 unmaskBytes:(char)arg5 ;
-(id)handler;
-(id)consumer;
@end

