/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGRealtimeStore : NSObject
+(void)patchStoreWithPatches:(id)arg1 ;
+(char)patchStoreWithOperation:(id)arg1 ;
+(char)processAddOperation:(id)arg1 ;
+(char)processRemoveOperation:(id)arg1 ;
+(char)processReplaceOperation:(id)arg1 ;
+(void)markPathAsTombstone:(id)arg1 ;
+(id)operationStore;
+(id)tombstoneStore;
+(void)removeAllObjects;
+(id)operations;
@end

