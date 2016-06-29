

#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface AFSecurityPolicy : NSObject {

	char _allowInvalidCertificates;
	unsigned _SSLPinningMode;
	NSArray* _pinnedCertificates;
	NSArray* _pinnedPublicKeys;

}

@property (nonatomic,retain) NSArray * pinnedPublicKeys;                                //@synthesize pinnedPublicKeys=_pinnedPublicKeys - In the implementation block
@property (assign,setter=SLPinningMode,nonatomic) unsigned SSLPinningMode;              //@synthesize SSLPinningMode=_SSLPinningMode - In the implementation block
@property (nonatomic,retain) NSArray * pinnedCertificates;                              //@synthesize pinnedCertificates=_pinnedCertificates - In the implementation block
@property (assign,nonatomic) char allowInvalidCertificates;                             //@synthesize allowInvalidCertificates=_allowInvalidCertificates - In the implementation block
+(id)defaultPinnedCertificates;
+(id)policyWithPinningMode:(unsigned)arg1 ;
+(id)keyPathsForValuesAffectingPinnedPublicKeys;
+(id)defaultPolicy;
-(void)setSSLPinningMode:(unsigned)arg1 ;
-(void)setPinnedCertificates:(NSArray *)arg1 ;
-(NSArray *)pinnedCertificates;
-(void)setPinnedPublicKeys:(NSArray *)arg1 ;
-(unsigned)SSLPinningMode;
-(char)allowInvalidCertificates;
-(NSArray *)pinnedPublicKeys;
-(char)evaluateServerTrust:(SecTrustRef)arg1 ;
-(void)setAllowInvalidCertificates:(char)arg1 ;
@end

