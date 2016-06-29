

@class NSSet;

@interface FBSDKGameRequestFrictionlessRecipientCache : NSObject {

	NSSet* _recipientIDs;

}
-(void)_accessTokenDidChangeNotification:(id)arg1 ;
-(char)recipientsAreFrictionless:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)updateWithResults:(id)arg1 ;
-(void)_updateCache;
@end

