

@class NSString;

@interface IGDeviceBasedLoginAccountCredential : NSObject {

	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
-(id)initWithNonce:(id)arg1 ;
-(NSString *)nonce;
@end

