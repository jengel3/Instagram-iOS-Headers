
#import <Instagram/FBRequestDelegate.h>

@class NSArray, FBRequest, NSString;

@interface FBFrictionlessRequestSettings : NSObject <FBRequestDelegate> {

	NSArray* _allowedRecipients;
	FBRequest* _activeRequest;
	char _enabled;

}

@property (nonatomic,readonly) char enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * recipientIDs; 
@property (retain) NSArray * allowedRecipients;                      //@synthesize allowedRecipients=_allowedRecipients - In the implementation block
@property (nonatomic,retain) FBRequest * activeRequest;              //@synthesize activeRequest=_activeRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(void)setAllowedRecipients:(NSArray *)arg1 ;
-(void)reloadRecipientCacheWithFacebook:(id)arg1 ;
-(NSArray *)allowedRecipients;
-(char)isFrictionlessEnabledForRecipient:(id)arg1 ;
-(void)updateRecipientCacheWithRequestResult:(id)arg1 ;
-(void)enableWithFacebook:(id)arg1 ;
-(NSArray *)recipientIDs;
-(void)updateRecipientCacheWithRecipients:(id)arg1 ;
-(char)isFrictionlessEnabledForRecipients:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(char)enabled;
-(void)dealloc;
-(id)init;
-(void)setActiveRequest:(FBRequest *)arg1 ;
-(FBRequest *)activeRequest;
@end

