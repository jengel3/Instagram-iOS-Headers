
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
-(NSString *)nonce;
-(void)prepare;
-(void)dealloc;
-(NSString *)signature;
@end

