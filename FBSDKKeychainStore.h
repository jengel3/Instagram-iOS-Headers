/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBSDKKeychainStore : NSObject {

	NSString* _service;
	NSString* _accessGroup;

}

@property (nonatomic,copy,readonly) NSString * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
-(char)setData:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(id)queryForKey:(id)arg1 ;
-(char)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(char)setString:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(NSString *)accessGroup;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(NSString *)service;
-(id)dataForKey:(id)arg1 ;
@end
