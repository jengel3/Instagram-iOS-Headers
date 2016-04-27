
@class UICollectionView, IGDirectThread;


@protocol IGDirectViewControllerProtocol <NSObject>
@property (nonatomic,retain) UICollectionView * collectionView; 
@property (nonatomic,retain) IGDirectThread * thread; 
@required
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(id)arg1;
-(void)setThread:(id)arg1;
-(IGDirectThread *)thread;

@end

