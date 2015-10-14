/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSMutableURLRequest.h>

@protocol OASignatureProviding;
@class OAConsumer, OAToken, NSString;

@interface OAMutableURLRequest : NSMutableURLRequest {

	OAConsumer* consumer;
	OAToken* token;
	NSString* realm;
	NSString* signature;
	id<OASignatureProviding> signatureProvider;
	NSString* nonce;
	NSString* timestamp;

}

@property (readonly) NSString * signature; 
@property (readonly) NSString * nonce; 
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 ;
-(void)_generateTimestamp;
-(void)_generateNonce;
-(id)_signatureBaseString;
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 nonce:(id)arg6 timestamp:(id)arg7 ;
-(void)dealloc;
-(NSString *)signature;
-(NSString *)nonce;
-(void)prepare;
@end

