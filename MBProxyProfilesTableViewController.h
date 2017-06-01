#import <UIKit/UIKit.h>
#import "MBProxyProfile.h"

@interface MBProxyProfilesTableViewController : UITableViewController

@property (nonatomic, strong, readonly) NSArray<MBProxyProfile *> *profiles;
@property (nonatomic, readonly) NSUInteger selectedIndex;
@property (nonatomic, copy) void (^dismissCompletion)();

+ (instancetype)controllerWithProfiles:(NSArray<MBProxyProfile *> *)profiles selectedIndex:(NSUInteger)selectedIndex;
- (instancetype)initWithProfiles:(NSArray<MBProxyProfile *> *)profiles selectedIndex:(NSUInteger)selectedIndex;

@end
