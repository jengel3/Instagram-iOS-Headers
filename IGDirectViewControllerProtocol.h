
@class UICollectionView, IGCameraNavigationController, IGDirectThread, NSString;


@protocol IGDirectViewControllerProtocol <NSObject>
@property (nonatomic,retain) UICollectionView * collectionView; 
@property (nonatomic,readonly) IGCameraNavigationController * cameraNavigationController; 
@property (nonatomic,retain) IGDirectThread * thread; 
@property (nonatomic,copy,readonly) NSString * threadID; 
@required
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1;
-(IGCameraNavigationController *)cameraNavigationController;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(id)arg1;
-(void)setThread:(id)arg1;
-(IGDirectThread *)thread;
-(NSString *)threadID;

@end

