//
//  MAAdRevenueDelegate.h
//  AppLovinSDK
//
//  Created by Andrew Tian on 6/3/21.
//

#import <AppLovinSDK/MAAd.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * This protocol defines a listener to be notified about ad revenue events.
 */
@protocol MAAdRevenueDelegate<NSObject>

/**
 * The SDK invokes this callback when it detects a revenue event for an ad.
 *
 * The SDK invokes this callback on the UI thread.
 *
 * @param ad The ad for which the revenue event was detected.
 */
- (void)didPayRevenueForAd:(MAAd *)ad;

@end

NS_ASSUME_NONNULL_END
