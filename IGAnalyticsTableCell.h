
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

@property (copy) NSDictionary * logEntryDict;                   //@synthesize logEntryDict=_logEntryDict - In the implementation block
@property (copy) NSDictionary * specificEventDict;              //@synthesize specificEventDict=_specificEventDict - In the implementation block
@property (copy) NSURL * thumbURL;                              //@synthesize thumbURL=_thumbURL - In the implementation block
@property (retain) IGUser * user;                               //@synthesize user=_user - In the implementation block
@property (retain) IGFeedItem * feedItem;                       //@synthesize feedItem=_feedItem - In the implementation block
@property (retain) IGHashtagModel * hashtag;                    //@synthesize hashtag=_hashtag - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(NSDictionary *)logEntryDict;
-(void)setLogEntryDict:(NSDictionary *)arg1 ;
-(NSDictionary *)specificEventDict;
-(void)setSpecificEventDict:(NSDictionary *)arg1 ;
-(NSURL *)thumbURL;
-(void)setThumbURL:(NSURL *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)init;
@end

