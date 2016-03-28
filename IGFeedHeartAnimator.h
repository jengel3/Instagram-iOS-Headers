

@class IGHeartView, UICollectionView;

@interface IGFeedHeartAnimator : NSObject {

	char _usesLegacyAnimation;
	IGHeartView* _heartImageView;
	id _heartLikeFeedItem;
	UICollectionView* _collectionView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) IGHeartView * heartImageView;                   //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) id heartLikeFeedItem;                             //@synthesize heartLikeFeedItem=_heartLikeFeedItem - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) char usesLegacyAnimation;                       //@synthesize usesLegacyAnimation=_usesLegacyAnimation - In the implementation block
@property (nonatomic,copy) id completionBlock;                                 //@synthesize completionBlock=_completionBlock - In the implementation block
-(IGHeartView *)heartImageView;
-(void)animateHeartLikeForCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCollectionView:(id)arg1 usesLegacyAnimation:(char)arg2 ;
-(char)usesLegacyAnimation;
-(void)setHeartLikeFeedItem:(id)arg1 ;
-(id)heartLikeFeedItem;
-(void)animateHeartLikeForItem:(id)arg1 atIndex:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateHeartImageViewLocationToSection:(unsigned)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UICollectionView *)collectionView;
@end

