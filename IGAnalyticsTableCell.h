
#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSURL, IGUser, IGFeedItem, IGHashtagModel;

@interface IGAnalyticsTableCell : UITableViewCell {

	NSDictionary* _logEntryDict;
	NSDictionary* _specificEventDict;
	NSURL* _thumbURL;
	IGUser* _user;
	IGFeedItem* _feedItem;
	IGHashtagModel* _hashtag;

}

@property (nonatomic,copy) NSDictionary * logEntryDict;                   //@synthesize logEntryDict=_logEntryDict - In the implementation block
@property (nonatomic,copy) NSDictionary * specificEventDict;              //@synthesize specificEventDict=_specificEventDict - In the implementation block
@property (nonatomic,copy) NSURL * thumbURL;                              //@synthesize thumbURL=_thumbURL - In the implementation block
@property (nonatomic,retain) IGUser * user;                               //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                       //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                    //@synthesize hashtag=_hashtag - In the implementation block
-(IGFeedItem *)feedItem;
-(NSDictionary *)logEntryDict;
-(void)setLogEntryDict:(NSDictionary *)arg1 ;
-(NSDictionary *)specificEventDict;
-(void)setSpecificEventDict:(NSDictionary *)arg1 ;
-(NSURL *)thumbURL;
-(void)setThumbURL:(NSURL *)arg1 ;
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)init;
@end

