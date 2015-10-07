/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface FBCrypto : NSObject {

	NSData* _encryptionKeyData;
	NSData* _macKeyData;

}
+(id)randomBytes:(unsigned)arg1 ;
+(id)makeMasterKey;
-(id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3 ;
-(id)initWithMasterKey:(id)arg1 ;
-(id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2 ;
-(id)encrypt:(id)arg1 additionalDataToSign:(id)arg2 ;
-(id)decrypt:(id)arg1 additionalSignedData:(id)arg2 ;
-(void)dealloc;
@end

