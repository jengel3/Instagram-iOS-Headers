
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, IGFeedItem, NSMutableDictionary, NSString;

@interface IGFeedItemComments : NSObject <NSCoding> {

	NSArray* _previewCommentsInFeed;
	NSArray* _activeComments;
	char _showPreviewComments;
	char _collapsedComments;
	char _moreCommentsAvailable;
	char _commentsDisabled;
	NSArray* _recentComments;
	int _commentCount;
	IGFeedItem* _feedItem;
	int _numCommentInPreview;
	NSArray* _topComments;
	NSArray* _previewComments;
	NSMutableDictionary* _pendingComments;
	NSString* _commentCursor;

}

@property (assign,nonatomic,__weak) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) int numCommentInPreview;                            //@synthesize numCommentInPreview=_numCommentInPreview - In the implementation block
@property (readonly) NSArray * topComments;                              //@synthesize topComments=_topComments - In the implementation block
@property (assign) int commentCount;                                     //@synthesize commentCount=_commentCount - In the implementation block
@property (copy) NSArray * recentComments;                               //@synthesize recentComments=_recentComments - In the implementation block
@property (readonly) NSArray * previewComments;                          //@synthesize previewComments=_previewComments - In the implementation block
@property (readonly) char showPreviewComments;                           //@synthesize showPreviewComments=_showPreviewComments - In the implementation block
@property (readonly) NSMutableDictionary * pendingComments;              //@synthesize pendingComments=_pendingComments - In the implementation block
@property (readonly) char collapsedComments;                             //@synthesize collapsedComments=_collapsedComments - In the implementation block
@property (readonly) char moreCommentsAvailable;                         //@synthesize moreCommentsAvailable=_moreCommentsAvailable - In the implementation block
@property (copy,readonly) NSString * commentCursor;                      //@synthesize commentCursor=_commentCursor - In the implementation block
@property (readonly) char commentsDisabled;                              //@synthesize commentsDisabled=_commentsDisabled - In the implementation block
-(IGFeedItem *)feedItem;
-(void)updateCommentModelForCommentDisabled;
-(id)filteredActiveComments;
-(NSArray *)topComments;
-(char)moreCommentsAvailable;
-(char)commentsDisabled;
-(NSArray *)recentComments;
-(id)previewCommentsInFeed;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)invalidateCachedComments;
-(id)parseCommentArrayFromDictionary:(id)arg1 ;
-(void)setRecentComments:(NSArray *)arg1 ;
-(char)showPreviewComments;
-(char)collapsedComments;
-(int)numCommentInPreview;
-(NSArray *)previewComments;
-(id)initWithShowPreviewComments:(char)arg1 ;
-(void)updateCommentModelWithDictionary:(id)arg1 isHeadRequest:(char)arg2 ;
-(NSString *)commentCursor;
-(int)commentCount;
-(void)setCommentCount:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)pendingComments;
@end

