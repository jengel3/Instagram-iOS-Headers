
#import <Instagram/IGFeedMegaphoneProvider.h>

@class IGGenericMegaphone, NSString;

@interface IGMainFeedMegaphoneProvider : NSObject <IGFeedMegaphoneProvider> {

	IGGenericMegaphone* _favoritesMegaphone;
	IGGenericMegaphone* _serverMegaphone;

}

@property (nonatomic,retain) IGGenericMegaphone * favoritesMegaphone;              //@synthesize favoritesMegaphone=_favoritesMegaphone - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * serverMegaphone;                 //@synthesize serverMegaphone=_serverMegaphone - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGGenericMegaphone *)serverMegaphone;
-(IGGenericMegaphone *)favoritesMegaphone;
-(void)setServerMegaphone:(IGGenericMegaphone *)arg1 ;
-(id)activeMegaphones;
-(void)updateServerMegaphoneWithResponse:(id)arg1 ;
-(void)setFavoritesMegaphone:(IGGenericMegaphone *)arg1 ;
-(unsigned)displaySource;
-(id)init;
@end

