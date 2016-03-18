
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGCommentModelDelegate.h>
#import <Instagram/IGDKDiffable.h>

@class IGUser, IGDate, IGLocation, CLLocation, NSMutableOrderedSet, NSNumber, IGCommentModel, NSArray, NSString, NSURL, IGPostFeaturedBadge, NSMutableDictionary, IGPhoto, IGVideo;

@interface IGPost : IGStorableObject <IGCommentModelDelegate, IGDKDiffable> {

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
	NSNumber* _commentCursor;
	int _commentCount;
	NSArray* _allComments;
	NSString* _rankToken;
	IGDate* _lastCommentTimeStamp;
	IGDate* _lastReadTimeStamp;
	NSString* _exploreContext;
	NSString* _exploreSourceToken;
	int _attribution;
	NSArray* _items;
	int _linkStyle;
	NSURL* _link;
	IGPostFeaturedBadge* _featuredBadge;
	int _numCommentInPreview;
	NSString* _showTopLikerQEGroup;
	NSNumber* _insightsImpressionCount;
	NSNumber* _insightsReachCount;
	NSMutableDictionary* _pendingComments;
	NSArray* _activeComments;

}

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
@property (retain) IGCommentModel * caption;                           //@synthesize caption=_caption - In the implementation block
@property (assign) char captionIsEdited;                               //@synthesize captionIsEdited=_captionIsEdited - In the implementation block
@property (retain) NSNumber * commentCursor;                           //@synthesize commentCursor=_commentCursor - In the implementation block
@property (readonly) int commentCount;                                 //@synthesize commentCount=_commentCount - In the implementation block
@property (readonly) NSArray * allComments;                            //@synthesize allComments=_allComments - In the implementation block
@property (assign) char moreCommentsAvailable;                         //@synthesize moreCommentsAvailable=_moreCommentsAvailable - In the implementation block
@property (assign) char collapseComments;                              //@synthesize collapseComments=_collapseComments - In the implementation block
@property (readonly) NSString * rankToken;                             //@synthesize rankToken=_rankToken - In the implementation block
@property (retain) IGDate * lastCommentTimeStamp;                      //@synthesize lastCommentTimeStamp=_lastCommentTimeStamp - In the implementation block
@property (retain) IGDate * lastReadTimeStamp;                         //@synthesize lastReadTimeStamp=_lastReadTimeStamp - In the implementation block
@property (copy,readonly) NSString * exploreContext;                   //@synthesize exploreContext=_exploreContext - In the implementation block
@property (copy,readonly) NSString * exploreSourceToken;               //@synthesize exploreSourceToken=_exploreSourceToken - In the implementation block
@property (readonly) int attribution;                                  //@synthesize attribution=_attribution - In the implementation block
@property (readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
@property (readonly) int linkStyle;                                    //@synthesize linkStyle=_linkStyle - In the implementation block
@property (readonly) NSURL * link;                                     //@synthesize link=_link - In the implementation block
@property (retain) IGPostFeaturedBadge * featuredBadge;                //@synthesize featuredBadge=_featuredBadge - In the implementation block
@property (assign) int numCommentInPreview;                            //@synthesize numCommentInPreview=_numCommentInPreview - In the implementation block
@property (retain) NSString * showTopLikerQEGroup;                     //@synthesize showTopLikerQEGroup=_showTopLikerQEGroup - In the implementation block
@property (retain) NSNumber * insightsImpressionCount;                 //@synthesize insightsImpressionCount=_insightsImpressionCount - In the implementation block
@property (retain) NSNumber * insightsReachCount;                      //@synthesize insightsReachCount=_insightsReachCount - In the implementation block
@property (assign,nonatomic) char needsFetch;                          //@synthesize needsFetch=_needsFetch - In the implementation block
@property (retain) NSMutableDictionary * pendingComments;              //@synthesize pendingComments=_pendingComments - In the implementation block
@property (retain) NSArray * activeComments;                           //@synthesize activeComments=_activeComments - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForMediaAspectRatio:(CGSize)arg1 normalizedToViewWidth:(float)arg2 ;
+(CGSize)sizeForPhoto:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(CGSize)sizeForVideo:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(id)pkFromShortcode:(id)arg1 ;
+(id)hmacFromShortcode:(id)arg1 ;
+(id)encodedPkFromShortcode:(id)arg1 ;
+(long long)decodePk:(id)arg1 ;
-(CGSize)sizeForMediaNormalizedToViewWidth:(float)arg1 ;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)filteredActiveComments;
-(int)numCommentInPreview;
-(char)moreCommentsAvailable;
-(char)collapseComments;
-(CLLocation *)mediaCoord;
-(IGDate *)takenAtDate;
-(char)hasLiked;
-(NSMutableOrderedSet *)likers;
-(NSString *)rankToken;
-(int)linkStyle;
-(NSString *)exploreContext;
-(id)ig_summaryForAccessibilityLabel;
-(unsigned long long)ig_accessibilityTraits;
-(id)diffIdentifier;
-(void)fetchCommentsWithLoadMore:(char)arg1 completionHandler:(/*^block*/id)arg2 subscriptionHandler:(/*^block*/id)arg3 ;
-(void)removeCommentWithPK:(id)arg1 ;
-(void)setCaptionWithDictionary:(id)arg1 notify:(char)arg2 ;
-(void)commentRemoveRequestStarted:(id)arg1 notify:(char)arg2 ;
-(id)bulkCommentDeletionDidUndoForComments:(id)arg1 ;
-(void)bulkCommentDeletionDidFinishForComments:(id)arg1 ;
-(void)bulkCommentDeletionDidFailForComments:(id)arg1 ;
-(char)captionIsEdited;
-(id)urlToPostComment;
-(void)commentPostRequestStarted:(id)arg1 ;
-(void)commentPostRequestFailed:(id)arg1 ;
-(void)commentPostRequestFinished:(id)arg1 ;
-(void)commentPostRequestFailedSpam:(id)arg1 ;
-(void)commentRemoveRequestStarted:(id)arg1 ;
-(id)urlToDeleteComment:(id)arg1 ;
-(void)commentRemoveRequestFailed:(id)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 ;
-(id)urlToFlagComment:(id)arg1 ;
-(NSArray *)activeComments;
-(id)filteredActiveCaptionAndComments;
-(NSArray *)allComments;
-(NSString *)showTopLikerQEGroup;
-(IGPostFeaturedBadge *)featuredBadge;
-(char)shouldDisableVideoIndicator;
-(char)postIsBroken;
-(NSString *)exploreSourceToken;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)needsFetch;
-(id)ig_accessibilityLabel;
-(void)fetchAdditionalInfo;
-(void)postPostUpdatedNotification:(int)arg1 ;
-(void)updateLocalLikeStatus:(char)arg1 withUser:(id)arg2 ;
-(void)removeLocalLocationInformation;
-(NSNumber *)commentCursor;
-(void)setCommentInfoFromDictionary:(id)arg1 append:(char)arg2 ;
-(id)itemsArrayForPostDictionary:(id)arg1 ;
-(void)setLocationInfoFromDictionary:(id)arg1 ;
-(void)setLikeInfoFromDictionary:(id)arg1 ;
-(void)invalidateActiveComments;
-(void)setCommentCursor:(NSNumber *)arg1 ;
-(void)setMoreCommentsAvailable:(char)arg1 ;
-(void)setCaptionIsEdited:(char)arg1 ;
-(void)setNumCommentInPreview:(int)arg1 ;
-(void)setCollapseComments:(char)arg1 ;
-(void)setAllComments:(NSArray *)arg1 ;
-(void)schedulePostUpdatedNotification;
-(void)setActiveComments:(NSArray *)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 notify:(char)arg2 ;
-(void)commentRemoveRequestFailed:(id)arg1 notify:(char)arg2 ;
-(void)setLastCommentTimeStamp:(IGDate *)arg1 ;
-(void)setLastReadTimeStamp:(IGDate *)arg1 ;
-(void)postPostUpdatedNotification;
-(IGDate *)lastCommentTimeStamp;
-(IGDate *)lastReadTimeStamp;
-(void)setFeaturedBadge:(IGPostFeaturedBadge *)arg1 ;
-(void)setShowTopLikerQEGroup:(NSString *)arg1 ;
-(NSNumber *)insightsImpressionCount;
-(void)setInsightsImpressionCount:(NSNumber *)arg1 ;
-(NSNumber *)insightsReachCount;
-(void)setInsightsReachCount:(NSNumber *)arg1 ;
-(void)setNeedsFetch:(char)arg1 ;
-(void)setPendingComments:(NSMutableDictionary *)arg1 ;
-(IGUser *)user;
-(int)mediaType;
-(int)commentCount;
-(int)likeCount;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(void)setCommentCount:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSArray *)items;
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

