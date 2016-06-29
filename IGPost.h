
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGMediaPreloaderItem.h>
#import <Instagram/IGCommentModelDelegate.h>
#import <Instagram/IGDKDiffable.h>
#import <Instagram/IGFeedItemProtocol.h>

@class IGUser, IGDate, IGLocation, CLLocation, NSMutableOrderedSet, NSNumber, IGCommentModel, NSOrderedSet, NSString, NSArray, IGPostCollaboration, NSURL, IGPostFeaturedBadge, NSMutableDictionary, IGPhoto, IGVideo;

@interface IGPost : IGStorableObject <IGDirectUploadableProducer, IGMediaPreloaderItem, IGCommentModelDelegate, IGDKDiffable, IGFeedItemProtocol> {

	char _hasLiked;
	char _captionIsEdited;
	char _moreCommentsAvailable;
	char _collapseComments;
	char _needsFetch;
	int _mediaType;
	IGUser* _user;
	IGDate* _takenAtDate;
	IGLocation* _location;
	CLLocation* _mediaCoord;
	NSMutableOrderedSet* _likers;
	int _likeCount;
	NSNumber* _viewCount;
	IGCommentModel* _caption;
	NSOrderedSet* _viewers;
	int _viewerCount;
	float _captionPosition;
	NSString* _commentCursor;
	int _commentCount;
	NSArray* _allComments;
	IGDate* _lastCommentTimeStamp;
	IGDate* _lastReadTimeStamp;
	NSString* _exploreContext;
	NSString* _exploreSourceToken;
	int _attribution;
	NSArray* _items;
	IGPostCollaboration* _collaboration;
	int _linkStyle;
	NSURL* _link;
	IGPostFeaturedBadge* _featuredBadge;
	int _numCommentInPreview;
	NSString* _socialContext;
	NSArray* _topComments;
	NSArray* _previewComments;
	NSNumber* _insightsImpressionCount;
	NSNumber* _insightsReachCount;
	NSNumber* _insightsEngagementCount;
	NSMutableDictionary* _pendingComments;
	NSArray* _activeComments;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableDictionary * pendingComments;              //@synthesize pendingComments=_pendingComments - In the implementation block
@property (copy) NSString * commentCursor;                             //@synthesize commentCursor=_commentCursor - In the implementation block
@property (assign) char moreCommentsAvailable;                         //@synthesize moreCommentsAvailable=_moreCommentsAvailable - In the implementation block
@property (assign) char captionIsEdited;                               //@synthesize captionIsEdited=_captionIsEdited - In the implementation block
@property (assign) int numCommentInPreview;                            //@synthesize numCommentInPreview=_numCommentInPreview - In the implementation block
@property (assign) char collapseComments;                              //@synthesize collapseComments=_collapseComments - In the implementation block
@property (retain) IGCommentModel * caption;                           //@synthesize caption=_caption - In the implementation block
@property (retain) NSArray * activeComments;                           //@synthesize activeComments=_activeComments - In the implementation block
@property (retain) NSArray * items;                                    //@synthesize items=_items - In the implementation block
@property (retain) IGPostCollaboration * collaboration;                //@synthesize collaboration=_collaboration - In the implementation block
@property (readonly) int mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) IGPhoto * photo; 
@property (readonly) IGVideo * video; 
@property (readonly) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (readonly) IGDate * takenAtDate;                             //@synthesize takenAtDate=_takenAtDate - In the implementation block
@property (readonly) IGLocation * location;                            //@synthesize location=_location - In the implementation block
@property (readonly) CLLocation * mediaCoord;                          //@synthesize mediaCoord=_mediaCoord - In the implementation block
@property (readonly) NSMutableOrderedSet * likers;                     //@synthesize likers=_likers - In the implementation block
@property (readonly) int likeCount;                                    //@synthesize likeCount=_likeCount - In the implementation block
@property (readonly) NSNumber * viewCount;                             //@synthesize viewCount=_viewCount - In the implementation block
@property (readonly) char hasLiked;                                    //@synthesize hasLiked=_hasLiked - In the implementation block
@property (readonly) NSOrderedSet * viewers;                           //@synthesize viewers=_viewers - In the implementation block
@property (readonly) int viewerCount;                                  //@synthesize viewerCount=_viewerCount - In the implementation block
@property (readonly) float captionPosition;                            //@synthesize captionPosition=_captionPosition - In the implementation block
@property (readonly) int commentCount;                                 //@synthesize commentCount=_commentCount - In the implementation block
@property (readonly) NSArray * allComments;                            //@synthesize allComments=_allComments - In the implementation block
@property (retain) IGDate * lastCommentTimeStamp;                      //@synthesize lastCommentTimeStamp=_lastCommentTimeStamp - In the implementation block
@property (retain) IGDate * lastReadTimeStamp;                         //@synthesize lastReadTimeStamp=_lastReadTimeStamp - In the implementation block
@property (copy,readonly) NSString * exploreContext;                   //@synthesize exploreContext=_exploreContext - In the implementation block
@property (copy,readonly) NSString * exploreSourceToken;               //@synthesize exploreSourceToken=_exploreSourceToken - In the implementation block
@property (readonly) int attribution;                                  //@synthesize attribution=_attribution - In the implementation block
@property (readonly) int linkStyle;                                    //@synthesize linkStyle=_linkStyle - In the implementation block
@property (readonly) NSURL * link;                                     //@synthesize link=_link - In the implementation block
@property (retain) IGPostFeaturedBadge * featuredBadge;                //@synthesize featuredBadge=_featuredBadge - In the implementation block
@property (copy,readonly) NSString * socialContext;                    //@synthesize socialContext=_socialContext - In the implementation block
@property (readonly) NSArray * topComments;                            //@synthesize topComments=_topComments - In the implementation block
@property (readonly) NSArray * previewComments;                        //@synthesize previewComments=_previewComments - In the implementation block
@property (retain) NSNumber * insightsImpressionCount;                 //@synthesize insightsImpressionCount=_insightsImpressionCount - In the implementation block
@property (retain) NSNumber * insightsReachCount;                      //@synthesize insightsReachCount=_insightsReachCount - In the implementation block
@property (retain) NSNumber * insightsEngagementCount;                 //@synthesize insightsEngagementCount=_insightsEngagementCount - In the implementation block
@property (assign,nonatomic) char needsFetch;                          //@synthesize needsFetch=_needsFetch - In the implementation block
+(CGSize)sizeForPhoto:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(CGSize)sizeForVideo:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(CGSize)sizeForMediaAspectRatio:(CGSize)arg1 normalizedToViewWidth:(float)arg2 ;
+(id)pkFromShortcode:(id)arg1 ;
+(id)hmacFromShortcode:(id)arg1 ;
+(id)encodedPkFromShortcode:(id)arg1 ;
+(long long)decodePk:(id)arg1 ;
+(void)reportSpamMediaID:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)reportInappropriateMediaID:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)diffIdentifier;
-(IGDate *)takenAtDate;
-(int)viewerCount;
-(NSOrderedSet *)viewers;
-(float)captionPosition;
-(id)ig_summaryForAccessibilityLabel;
-(char)captionIsEdited;
-(id)filteredActiveComments;
-(char)moreCommentsAvailable;
-(NSArray *)topComments;
-(void)fetchCommentsWithLoadMore:(char)arg1 allowCaptionOverwrite:(char)arg2 completionHandler:(/*^block*/id)arg3 subscriptionHandler:(/*^block*/id)arg4 ;
-(void)removeCommentWithPK:(id)arg1 ;
-(void)setCaptionWithDictionary:(id)arg1 notify:(char)arg2 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(CGSize)sizeForMediaNormalizedToViewWidth:(float)arg1 ;
-(char)needsFetch;
-(char)postIsBroken;
-(CLLocation *)mediaCoord;
-(id)ig_accessibilityLabel;
-(unsigned long long)ig_accessibilityTraits;
-(IGPostFeaturedBadge *)featuredBadge;
-(char)shouldDisableVideoIndicator;
-(char)hasLiked;
-(NSString *)exploreContext;
-(NSString *)exploreSourceToken;
-(void)reportSpamWithSourceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportInappropriateWithSourceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)allComments;
-(NSString *)socialContext;
-(unsigned)feedItemType;
-(void)fetchAdditionalInfo;
-(void)setNeedsFetch:(char)arg1 ;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)postPostUpdatedNotification:(int)arg1 ;
-(char)collapseComments;
-(int)numCommentInPreview;
-(NSArray *)previewComments;
-(void)updateLocalItemsWithNewItems:(id)arg1 ;
-(void)updateLocalLikeStatus:(char)arg1 withUser:(id)arg2 ;
-(id)itemsArrayForPostDictionary:(id)arg1 ;
-(void)setLocationInfoFromDictionary:(id)arg1 ;
-(void)setLikeInfoFromDictionary:(id)arg1 ;
-(void)setViewersFromDictionary:(id)arg1 ;
-(void)setCommentInfoFromDictionary:(id)arg1 append:(char)arg2 allowCaptionOverwrite:(char)arg3 ;
-(void)invalidateActiveComments;
-(id)parseCommentArrayFromDictionary:(id)arg1 ;
-(void)setCommentCursor:(NSString *)arg1 ;
-(void)setMoreCommentsAvailable:(char)arg1 ;
-(void)setCaptionIsEdited:(char)arg1 ;
-(void)setNumCommentInPreview:(int)arg1 ;
-(void)setCollapseComments:(char)arg1 ;
-(void)setCaptionPosition:(float)arg1 ;
-(void)setAllComments:(NSArray *)arg1 ;
-(void)schedulePostUpdatedNotification;
-(void)setActiveComments:(NSArray *)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 notify:(char)arg2 ;
-(void)commentRemoveRequestFailed:(id)arg1 notify:(char)arg2 ;
-(void)setLastCommentTimeStamp:(IGDate *)arg1 ;
-(void)setLastReadTimeStamp:(IGDate *)arg1 ;
-(void)commentRemoveRequestStarted:(id)arg1 notify:(char)arg2 ;
-(void)postPostUpdatedNotification;
-(void)commentPostRequestStarted:(id)arg1 ;
-(void)commentPostRequestFinished:(id)arg1 ;
-(void)commentPostRequestFailed:(id)arg1 ;
-(void)commentPostRequestFailedSpam:(id)arg1 ;
-(void)commentRemoveRequestStarted:(id)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 ;
-(void)commentRemoveRequestFailed:(id)arg1 ;
-(void)removeLocalLocationInformation;
-(id)filteredActiveCaptionAndComments;
-(void)bulkCommentDeletionDidFinishForComments:(id)arg1 ;
-(void)bulkCommentDeletionDidFailForComments:(id)arg1 ;
-(id)bulkCommentDeletionDidUndoForComments:(id)arg1 ;
-(NSMutableOrderedSet *)likers;
-(NSString *)commentCursor;
-(IGDate *)lastCommentTimeStamp;
-(IGDate *)lastReadTimeStamp;
-(IGPostCollaboration *)collaboration;
-(void)setCollaboration:(IGPostCollaboration *)arg1 ;
-(void)setFeaturedBadge:(IGPostFeaturedBadge *)arg1 ;
-(void)setPendingComments:(NSMutableDictionary *)arg1 ;
-(NSArray *)activeComments;
-(int)linkStyle;
-(NSNumber *)insightsImpressionCount;
-(NSNumber *)insightsReachCount;
-(NSNumber *)insightsEngagementCount;
-(void)setInsightsImpressionCount:(NSNumber *)arg1 ;
-(void)setInsightsReachCount:(NSNumber *)arg1 ;
-(void)setInsightsEngagementCount:(NSNumber *)arg1 ;
-(IGUser *)user;
-(int)mediaType;
-(int)commentCount;
-(int)likeCount;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(id)itemId;
-(void)setCommentCount:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(IGLocation *)location;
-(NSURL *)link;
-(IGCommentModel *)caption;
-(int)attribution;
-(void)setCaption:(IGCommentModel *)arg1 ;
-(NSMutableDictionary *)pendingComments;
-(IGVideo *)video;
-(void)addComment:(id)arg1 ;
-(char)updateWithDictionary:(id)arg1 ;
-(NSNumber *)viewCount;
@end

