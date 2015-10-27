/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGFilteredImageStore : NSObject
+(void)clearStore;
+(id)cachedImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(void)imageForImageName:(id)arg1 filterClass:(Class)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
+(id)diskStore;
+(id)keyForImageNamed:(id)arg1 filterClass:(Class)arg2 ;
+(char)containsImageForImageName:(id)arg1 filterClass:(Class)arg2 ;
+(id)queue;
+(id)cache;
+(void)clearCache;
@end

