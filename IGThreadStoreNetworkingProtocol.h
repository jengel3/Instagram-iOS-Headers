/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGThreadStoreNetworkingProtocol <NSObject>
@required
-(void)fetchThreadWithID:(id)arg1 cursorOption:(unsigned)arg2 cursorValue:(id)arg3 mergeOption:(unsigned)arg4 successfulThreadHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 cursorOption:(unsigned)arg3 cursorValue:(id)arg4 mergeOption:(unsigned)arg5 successfulThreadHandler:(/*^block*/id)arg6 failureHandler:(/*^block*/id)arg7;

@end
